
Pod::Spec.new do |s|
s.name                = "MetaMap-ID-SDK"
s.version             = "3.11.2"
s.summary             = "MetaMap SDK"
s.description         = "MetaMap SDK for iOS"
s.homepage            = "https://github.com/GetMati/mati-ios-sdk"
s.license             = { type: 'MIT', file: 'LICENSE' }
s.authors             = "MetaMap"
s.homepage 			  = "https://getmati.com"
s.platform            = :ios, "12.0"
s.source              = { :git => "https://github.com/GetMetaMap/metamap-ios-sdk",  :tag => "3.11.2"  }
s.vendored_frameworks = "MetaMapSDK.xcframework"
end