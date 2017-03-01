/*
    UFOCR - User-Friendly OCRs
    Copyright (C) 2009-2014 Alexander Zaitsev <zamazan4ik@tut.by>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef EXTPROCESSDIALOG_H
#define EXTPROCESSDIALOG_H

#include <QDialog>

namespace Ui
{
class ExtProcessDialog;
}

class ExtProcessDialog : public QDialog
{
Q_OBJECT

public:
    explicit ExtProcessDialog(QWidget* parent = 0);

    ~ExtProcessDialog();

    void hideButton();

public slots:

    void hide();

private slots:

    void on_pushButton_clicked();

private:
    Ui::ExtProcessDialog* ui;
};

#endif // EXTPROCESSDIALOG_H
