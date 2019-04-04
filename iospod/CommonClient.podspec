Pod::Spec.new do |s|
  s.name = 'CommonClient'
  s.version = '1.0.0'
  s.summary = 'CommonClient framework'

  s.homepage = 'www.google.com'
  s.license = { :type => "MIT" }
  s.author = {
    'Ainis' => 'ainisskabs@gmail.com',
    'Alexander' => 'alexander.zhigulich@gmail.com'
  }

  s.source = { :path => '.' }

  s.ios.deployment_target = '10.0'

  s.vendored_frameworks = 'CommonClient.framework'

  s.dependency 'Firebase/Core'
  s.dependency 'Firebase/Firestore'
end
