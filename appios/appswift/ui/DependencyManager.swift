import UIKit
import main

class DependencyManager: NSObject {
    
    public lazy var mainModel : MainModel = {
        return MainModelImpl(logger: logger)
    }()
    
    public lazy var uiContext : KotlinCoroutineContext = {
        UI()
    }()
    
    func mainPresenter() -> MainPresenter {
        return MainPresenter(
            uiContext: uiContext,
            mainModel: mainModel
        )
    }
    
    public lazy var logger : PlatformLogger = {
        PlatformLoggerIos()
    }()
    
}
