/**
    This file is part of program Lenna
    Copyright (C) 2013  FalseCAM

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "splashscreen.h"
#include <QtGui/QPixmap>

SplashScreen::SplashScreen(QWidget *parent) :
    QSplashScreen(parent)
{
    //setPixmap(QPixmap(":/logo/lenna_logo"));
}


void SplashScreen::setMessage(QString message){
    showMessage(message, Qt::AlignTop | Qt::AlignRight, Qt::red);
}
