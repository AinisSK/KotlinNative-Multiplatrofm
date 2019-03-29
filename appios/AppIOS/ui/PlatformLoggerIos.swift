import Foundation
import common_all
import common_client

class PlatformLoggerIos: NSObject, PlatformLogger {
    func logException(tag: String, text: String, exception: KotlinThrowable?) {
        print(text)
    }
    
    func log(tag: String, text: String) {
         print(text)
    }
    
    
}
