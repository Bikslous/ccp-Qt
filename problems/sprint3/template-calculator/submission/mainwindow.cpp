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

    connect(ui->pushButton_plus, &QPushButton::clicked, this, [this]() {
        if (operation_callback_) {
            operation_callback_(Operation::ADDITION);
        }
    });

    connect(ui->pushButton_times, &QPushButton::clicked, this, [this]() {
        if (operation_callback_) {
            operation_callback_(Operation::MULTIPLICATION);
        }
    });

    connect(ui->pushButton_divide, &QPushButton::clicked, this, [this]() {
        if (operation_callback_) {
            operation_callback_(Operation::DIVISION);
        }
    });

    connect(ui->pushButton_minus, &QPushButton::clicked, this, [this]() {
        if (operation_callback_) {
            operation_callback_(Operation::SUBTRACTION); 
        }
    });

    connect(ui->pushButton_pow, &QPushButton::clicked, this, [this]() {
        if (operation_callback_) {
            operation_callback_(Operation::POWER);
        }
    });

    connect(ui->pushButton_equality, &QPushButton::clicked, this, [this]() {
        if (control_callback_) {
            control_callback_(ControlKey::EQUALS);
        }
    });

    connect(ui->pushButton_clear, &QPushButton::clicked, this, [this]() {
        if (control_callback_) {
            control_callback_(ControlKey::CLEAR);
        }
    });

    connect(ui->pushButton_MS, &QPushButton::clicked, this, [this]() {
        if (control_callback_) {
            control_callback_(ControlKey::MEM_SAVE);
        }
    });

    connect(ui->pushButton_MR, &QPushButton::clicked, this, [this]() {
        if (control_callback_) {
            control_callback_(ControlKey::MEM_LOAD);
        }
    });

    connect(ui->pushButton_MC, &QPushButton::clicked, this, [this]() {
        if (control_callback_) {
            control_callback_(ControlKey::MEM_CLEAR);
        }
    });

    connect(ui->pushButton_positive_negative, &QPushButton::clicked, this, [this]() {
        if (control_callback_) {
            control_callback_(ControlKey::PLUS_MINUS);
        }
    });

    connect(ui->pushButton_delete, &QPushButton::clicked, this, [this]() {
        if (control_callback_) {
            control_callback_(ControlKey::BACKSPACE);
        }
    });

    connect(ui->tb_extra, &QPushButton::clicked, this, [this]() {
        if (control_callback_) {
            control_callback_(ControlKey::EXTRA_KEY);
        }
    });
  
    connect(ui->cmb_controller, &QComboBox::currentTextChanged, this, [this](const QString& text) {
        if (!controller_callback_){
            return;
        }

        if (text == "double") {
            controller_callback_(ControllerType::DOUBLE);
        }
        else if (text == "float"){
            controller_callback_(ControllerType::FLOAT);
        }
        else if (text == "uint8_t"){
            controller_callback_(ControllerType::UINT8_T);
        }
        else if (text == "int"){
            controller_callback_(ControllerType::INT);
        }
        else if (text == "int64_t"){
            controller_callback_(ControllerType::INT64_T);
        }
        else if (text == "size_t"){
            controller_callback_(ControllerType::SIZE_T);
        }
        else if (text == "Rational"){
            controller_callback_(ControllerType::RATIONAL);
        }
    });
}
/*QPushButton* buttons[] = {
ui->pushButton_zero, ui->pushButton_one,
ui->pushButton_two, ui->pushButton_three,
ui->pushButton_four, ui->pushButton_five,
ui->pushButton_six, ui->pushButton_seven,
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

void MainWindow::SetMemText(const std::string& text) {
    ui->l_memory->setText(QString::fromStdString(text));
}

void MainWindow::SetExtraKey(const std::optional<std::string>& key) {
    if (!key.has_value()) {
        ui->tb_extra->hide();
    } else {
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