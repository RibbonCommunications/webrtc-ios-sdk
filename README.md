# Ribbon WebRTC iOS SDK

<p>
    <img alt="Cocoapods platforms" src="https://img.shields.io/cocoapods/p/RibbonWebRTCSDK">
    <img alt="GitHub release (latest SemVer)" src="https://img.shields.io/github/v/release/RibbonCommunications/webrtc-ios-sdk">
    <img alt="Cocoapods" src="https://img.shields.io/cocoapods/v/RibbonWebRTCSDK">
</p>

## Install

### CocoaPods

CocoaPods is a dependency manager for Cocoa projects. For usage and installation instructions, visit their website. To integrate *Ribbon WebRTC iOS SDK* into your Xcode project using CocoaPods, specify it in your `Podfile`:

```ruby
...
use_frameworks!

target 'YOUR_TARGET_NAME' do
    pod 'RibbonWebRTCSDK', '~> 6.31.0'
end

post_install do |installer|
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      config.build_settings['ENABLE_BITCODE'] = 'NO'
    end
  end

  installer.aggregate_targets.each do |aggregate_target|
    aggregate_target.user_project.native_targets.each do |target|
      target.build_configurations.each do |config|
        config.build_settings['LIBRARY_SEARCH_PATHS'] = ['$(SDKROOT)/usr/lib/swift', '$(TOOLCHAIN_DIR)/usr/lib/swift/$(PLATFORM_NAME)', '$(inherited)']
       end
    end
    aggregate_target.user_project.save()
  end
end

...
```
#### Swift Package Manager
1. File > Swift Packages > Add Package Dependency
2. Add https://github.com/RibbonCommunications/webrtc-ios-sdk.git
3. Select "Branch" with "master"

### Manual

Alternatively *Ribbon WebRTC iOS SDK* can be manually integrated to your project with the [followed steps](https://ribboncommunications.github.io/webrtc-ios-sdk/tutorials/#/?id=manual-installation-after-v5170).  

## Documentation

The information about tutorials and documents can be found in the links below

* Documents: [API Docs](https://ribboncommunications.github.io/webrtc-ios-sdk/docs)

* Tutorials: Choose your configuration ( [BLUE-LAB](https://ribboncommunications.github.io/webrtc-ios-sdk/tutorials/?SUBSCRIPTIONFQDN=blue.rbbn.com&WEBSOCKETFQDN=blue.rbbn.com&ICESERVER1=turn-blue.rbbn.com) )

## Compatibility

Compatible iOS versions :

* iOS 13.x+

Compatible XCode Versions :

* XCode 13.x+

Compatible Ribbon WebRTC Gateway Server versions :

* WebRTC Gateway 4.10.0

* WebRTC Gateway 4.9.1

Tested on :

* iPhone 6S, 7, 7+, 8, X, 11, 11 Pro, iPad mini, and iPad Air

## Known Issues

