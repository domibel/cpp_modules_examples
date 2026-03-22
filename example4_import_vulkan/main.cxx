import vulkan;

int main() {
    vk::ApplicationInfo appInfo("Hello Vulkan", 1, nullptr, 0, vk::ApiVersion13);

    std::println("app: {}", appInfo.pApplicationName);
    std::println("api: {}.{}.{}",
        vk::apiVersionMajor(appInfo.apiVersion),
        vk::apiVersionMinor(appInfo.apiVersion),
        vk::apiVersionPatch(appInfo.apiVersion));

    auto instance = vk::createInstance(vk::InstanceCreateInfo({}, &appInfo));

    for (const auto& device : instance.enumeratePhysicalDevices())
        std::println("{}", device.getProperties().deviceName.data());

    instance.destroy();
}
