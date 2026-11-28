#pragma once

#ifdef PRAC_TESTS
#include "../tests/model.h"
#include "../tests/view.h"
#else
#include "model.h"
#include "view.h"
#endif

class Controller {
public:

    SetNewgameCallback

   auto move = [this](size_t x, size_t y) {
    Symbol symbol = model_.DoMove(x, y);

    if (symbol == Symbol::kEmpty) {
        return;
    }

QString mark = ToQString(symbol);
std::string new_value = mark.toStdString();
    view_.UpdateCell(x, y, new_value);

    if (model_.GetWinner() == std::nullopt) {
        Symbol next_player = model_.GetNextPlayer();
        view_.SetStatusStyle("black", false);
        view_.SetStatus(QString("Ход игрока ") + ToQString(next_player));
    } 
    else if (model_.GetWinner() == Symbol::kEmpty) {
        view_.SetStatusStyle("red", true);
        view_.SetStatus("Ничья");
    }
        else {
            Symbol winner = model_.GetWinner().value();
        view_.SetStatusStyle("green", true);
                view_.SetStatus(QString("Выиграл ") + ToQString(winner));
    }


};

private:
    Model model_;
    View view_;
};

