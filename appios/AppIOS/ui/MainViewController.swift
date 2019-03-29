import UIKit
import common_all
import common_client

class GithubViewController: UIViewController, MainView {
    
    func onServerResponse(success: Bool) {
            if success {
                self.label.text = "Server Processing"
            } else {
                self.label.text = "Server is busy, do locally"
            }
    }

    @IBOutlet weak var label: UILabel!
    
    lazy var presenter: MainPresenter = {
        dependencies().mainPresenter()
    }()
    
    @IBAction func doJob(_ sender: Any) {
        self.label.text = "..."
        presenter.doJob()
    }
    
    override func viewDidLoad() {
        presenter.bind(view: self)
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        presenter.unbind()
    }
    
    func showError(error: KotlinThrowable) {
        dependencies().logger.logException(tag: "TAG", text: error.message!, exception: error as! KotlinException)
    }
}