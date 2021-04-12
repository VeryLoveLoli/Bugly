# Bugly

腾讯日志 Bugly 2.5.71 SDK XCFramework SwiftPackage

### 工程引用
在 `Link Binary With Libraries` 添加 `libc++.tbd`、`libz.tbd`

### SwiftPackage 引用

```swift
.target(
    name: "Name",
    dependencies: ["Bugly"],
    linkerSettings: [.linkedLibrary("c++"), .linkedLibrary("z")]),
```
