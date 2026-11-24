#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
        connect(ui->pushButton_zero, &QPushButton::clicked, this, [this]() {
        if (digit_callback_) {
            digit_callback_(0);
        }
    });
    connect(ui->pushButton_one, &QPushButton::clicked, this, [this]() {
        if (digit_callback_) {
            digit_callback_(1);
        }
    });
    connect(ui->pushButton_two, &QPushButton::clicked, this, [this]() {
        if (digit_callback_) {
            digit_callback_(2);
        }
    });
    connect(ui->pushButton_three, &QPushButton::clicked, this, [this]() {
        if (digit_callback_) {
            digit_callback_(3);
        }
    });
    connect(ui->pushButton_four, &QPushButton::clicked, this, [this]() {
        if (digit_callback_) {
            digit_callback_(4);
        }
    });
    connect(ui->pushButton_five, &QPushButton::clicked, this, [this]() {
        if (digit_callback_) {
            digit_callback_(5);
        }
    });
    connect(ui->pushButton_six, &QPushButton::clicked, this, [this]() {
        if (digit_callback_) {
            digit_callback_(6);
        }
    });

    connect(ui->pushButton_seven, &QPushButton::clicked, this, [this]() {
        if (digit_callback_) {
            digit_callback_(7);
        }
    });

    connect(ui->pushButton_eight, &QPushButton::clicked, this, [this]() {
        if (digit_callback_) {
            digit_callback_(8);
        }
    });
        connect(ui->pushButton_nine, &QPushButton::clicked, this, [this]() {
        if (digit_callback_) {
            digit_callback_(9);
        }
    });
}
        connect(ui->pushButton_plus, &QPushButton::clicked, this, [this]() {
        if (operation_callback_) {
            operation_callback_(Operation::ADDITION);
        }
    });
            connect(ui->pushButton_plus, &QPushButton::clicked, this, [this]() {
        if (operation_callback_) {
            operation_callback_(Operation::ADDITION);
        }
    });
            connect(ui->pushButton_plus, &QPushButton::clicked, this, [this]() {
        if (operation_callback_) {
            operation_callback_(Operation::ADDITION);
        }
    });
            connect(ui->pushButton_plus, &QPushButton::clicked, this, [this]() {
        if (operation_callback_) {
            operation_callback_(Operation::ADDITION);
        }
    });
            connect(ui->pushButton_plus, &QPushButton::clicked, this, [this]() {
        if (operation_callback_) {
            operation_callback_(Operation::ADDITION);
        }
    });


/*QPushButton* buttons[] = {
    ui->pushButton_zero,  ui->pushButton_one,
    ui->pushButton_two,   ui->pushButton_three,
    ui->pushButton_four,  ui->pushButton_five,
    ui->pushButton_six,   ui->pushButton_seven,
    ui->pushButton_eight, ui->pushButton_nine
};

for (int digit = 0; digit < 10; ++digit) {
    connect(buttons[digit], &QPushButton::clicked, this, [this, digit]() {
        if (digit_callback_) {
            digit_callback_(digit);
        }
    });
}*/
MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::SetInputText(const std::string& text) {
    ui->l_result->setStyleSheet(""); 
    ui->l_result->setText(QString::fromStdString(text));
}
void MainWindow::SetErrorText(const std::string& text) {
    ui->l_result->setStyleSheet("color: red;");
    ui->l_result->setText(QString::fromStdString(text));
    }
void MainWindow::SetFormulaText(const std::string& text) {
    ui->l_formula->setText(QString::fromStdString(text));
    }
void  MainWindow::SetMemText(const std::string& text) {
    ui->l_memory->setText(QString::fromStdString(text));
    }
void MainWindow::SetExtraKey(const std::optional<std::string>& key) {
    if (!key.has_value()) {
        ui->tb_extra->hide();
        }
        else {
            ui->tb_extra->setText(QString::fromStdString(key.value()));
            ui->tb_extra->show();
            }
        }
void MainWindow::SetDigitKeyCallback(std::function<void(int)> cb) {
    digit_callback_ = cb;
}
void MainWindow::SetProcessOperationKeyCallback(std::function<void(Operation)> cb) {
    operation_callback_ = cb;
}
void MainWindow::SetProcessControlKeyCallback(std::function<void(ControlKey)> cb) {
    control_callback_ = cb;
}
void MainWindow::SetControllerCallback(std::function<void(ControllerType)> cb) {
    controller_callback_ = cb;
}