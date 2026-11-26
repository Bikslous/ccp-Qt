#pragma once

#include "calculator.h"
#include "enums.h"
#include <functional>
#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow() override;

    void SetInputText(const std::string& text);
    void SetErrorText(const std::string& text);
    void SetFormulaText(const std::string& text);
    void SetMemText(const std::string& text);
    void SetExtraKey(const std::optional<std::string>& key);
    void SetDigitKeyCallback(std::function<void(int)> cb);
    void SetProcessOperationKeyCallback(std::function<void(Operation)> cb);
    void SetProcessControlKeyCallback(std::function<void(ControlKey)> cb);
    void SetControllerCallback(std::function<void(ControllerType)> callback);

private:
    Ui::MainWindow* ui;
    std::function<void(int)> digit_callback_;
    std::function<void(Operation)> operation_callback_;
    std::function<void(ControlKey)> control_callback_;
    std::function<void(ControllerType)> controller_callback_;
};

