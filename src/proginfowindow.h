/*
   UFOCR - User-Friendly OCR
   Copyright (C) 2017 Alexander Zaitsev <zamazan4ik@tut.by>

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

#ifndef PROGINFOWINDOW_H
#define PROGINFOWINDOW_H

#include <QDialog>

namespace Ui
{
class ProgInfoWindow;
}

class ProgInfoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ProgInfoWindow(QWidget* parent = 0);

    ~ProgInfoWindow();

private:
    Ui::ProgInfoWindow* ui;
};

#endif // PROGINFOWINDOW_H
