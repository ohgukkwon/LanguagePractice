#create pyside GUI class
#create pyside GUI class
#add pygui class to rs232.py
import sys
from PySide6 import QtGui
#solve error about subprocess-exited-with-error
import multiprocessing
multiprocessing.freeze_support()

class MainWindow(QtGui.QWidget):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.initUI()
        self.initPLC()

    def initUI(self):
        #create int value label and text box
        intLabel = QtGui.QLabel('int value')
        self.intValue = QtGui.QLineEdit(self)
        #create connect button
        connectBtn = QtGui.QPushButton('Connect', self)
        connectBtn.clicked.connect(self.connectPLC)
        #create read button
        readBtn = QtGui.QPushButton('Read', self)
        readBtn.clicked.connect(self.readPLC)
        #create write button
        writeBtn = QtGui.QPushButton('Write', self)
        writeBtn.clicked.connect(self.writePLC)
        #create quit button
        quitBtn = QtGui.QPushButton('Quit', self)
        quitBtn.clicked.connect(self.quitApp)
        #create grid layout
        grid = QtGui.QGridLayout()
        grid.setSpacing(10)
        grid.addWidget(intLabel, 1, 0)
        grid.addWidget(self.intValue, 1, 1)
        grid.addWidget(connectBtn, 2, 0)
        grid.addWidget(readBtn, 2, 1)
        grid.addWidget(writeBtn, 2, 2)
        grid.addWidget(quitBtn, 3, 0)
        self.setLayout(grid)
        #set window title and show
        self.setGeometry(300, 300, 300, 150)
        self.setWindowTitle('PySide GUI')
        self.show()

    def initPLC(self):
        #create Beckhoff ADS connection
        import pyads
        self.plc = pyads.Connection()


