from PySide6.QtWidgets import QApplication, QWidget
from ui_Ui1Test import Ui_MainWindow
from shiboken6 import Shiboken
import sys

class DemoGui(QWidget, Ui_MainWindow):
    def __init__(self):
        super().__init__()
        
        self.setupUi(self)              #inside the class Ui_MainWindow
        
        self.show()


if __name__ == "__main__":
    app = QApplication(sys.argv)
    form = DemoGui()
    sys.exit(app.exec())

"""
app = QApplication(sys.argv)

window = QWidget()
window.show()


app.exec()"""