// Copyright (c) 2019 The EncoCoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLXNKWIDGET_H
#define COINCONTROLXNKWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlXnkWidget;
}

class CoinControlXnkWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlXnkWidget(QWidget *parent = nullptr);
    ~CoinControlXnkWidget();

private:
    Ui::CoinControlXnkWidget *ui;
};

#endif // COINCONTROLXNKWIDGET_H
