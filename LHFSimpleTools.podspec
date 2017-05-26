Pod::Spec.new do |s|
s.name         = "LHFSimpleTools"
s.version      = "0.0.4"
s.ios.deployment_target = '8.0'

s.summary      = "A simple tool"
s.homepage     = "https://github.com/lhf19900402/LHFSimpleTools"
s.license      = "MIT"
s.author             = { "李辉方" => "1291912893@qq.com" }
s.social_media_url   = "http://www.cnblogs.com/-superman-/"
s.source       = { :git => "https://github.com/lhf19900402/LHFSimpleTools.git", :tag => s.version }
s.source_files  = "LHFSimpleTools"
s.requires_arc = true
end


