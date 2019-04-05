import UIKit
import Firebase
import CommonClient

let KTUnit = KotlinUnit()

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    public lazy var dependencyManager = {
        DependencyManager()
    }()
    
    var window: UIWindow?

    static var me: AppDelegate {
        return UIApplication.shared.delegate as! AppDelegate
    }

    func application(_ application: UIApplication,
                     didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?)
        -> Bool {
            FirebaseApp.configure()
            return true
    }
    
    public func applicationDidBecomeActive(_ application: UIApplication) {
        //let logger = dependencyManager.logger
    }

    public func applicationWillTerminate(_ application: UIApplication) {
        // TODO: save context
    }
    
}

func dependencies() -> DependencyManager {
    return AppDelegate.me.dependencyManager
}
