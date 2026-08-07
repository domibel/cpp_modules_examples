import std;
import wgpu;

wgpu::Instance instance;
wgpu::Adapter adapter;

int main() {
    static constexpr auto kTimedWaitAny = wgpu::InstanceFeatureName::TimedWaitAny;
    wgpu::InstanceDescriptor instanceDescriptor;
    instanceDescriptor.requiredFeatureCount = 1;
    instanceDescriptor.requiredFeatures = &kTimedWaitAny;
    instance = wgpu::CreateInstance(&instanceDescriptor);

    wgpu::RequestAdapterOptions options = {};
    instance.WaitAny(
        instance.RequestAdapter(&options, wgpu::CallbackMode::WaitAnyOnly,
            [](wgpu::RequestAdapterStatus status, wgpu::Adapter a, wgpu::StringView message) {
                if (status != wgpu::RequestAdapterStatus::Success) {
                    std::println(std::cerr, "RequestAdapter failed: {}", std::string_view(message));
                    std::exit(1);
                }
                adapter = std::move(a);
            }),
        std::numeric_limits<std::uint64_t>::max());

    wgpu::AdapterInfo info;
    adapter.GetInfo(&info);

    std::println("app:          Hello Dawn");
    std::println("device:       {}", std::string_view(info.device));
    std::println("description:  {}", std::string_view(info.description));
    std::println("architecture: {}", std::string_view(info.architecture));
    std::println("vendor:       {}", std::string_view(info.vendor));
    std::println("vendorID:     {}", info.vendorID);
    std::println("deviceID:     {}", info.deviceID);
    std::println("backend:      {}", std::to_underlying(info.backendType));
    std::println("adapterType:  {}", std::to_underlying(info.adapterType));
    std::println("subgroupSize: {} (min) - {} (max)", info.subgroupMinSize, info.subgroupMaxSize);
}
