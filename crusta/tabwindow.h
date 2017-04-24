/* ============================================================
* Crusta - Qt5 webengine browser
* Copyright (C) 2017 Anmol Gautam <tarptaeya@gmail.com>
*
* THIS FILE IS A PART OF CRUSTA
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */

#ifndef TABWINDOW_H
#define TABWINDOW_H

#include "addresslineedit.h"
#include "searchlineedit.h"
#include "webview.h"
#include "privatewebview.h"

#include <QObject>
#include <QVBoxLayout>
#include <QWidget>
#include <QPushButton>



class TabWindow:public QObject{
    void viewHome();
    void updateAddrBar();
public:
    QVBoxLayout* vbox=new QVBoxLayout();
    QWidget* tab=new QWidget();
    QPushButton* back_btn=new QPushButton();
    QPushButton* fwd_btn=new QPushButton();
    QPushButton* load_btn=new QPushButton();
    QPushButton* home_btn=new QPushButton();
    QPushButton* bookmark_btn=new QPushButton();
    QPushButton* tool_btn=new QPushButton();
    QPushButton* options_btn=new QPushButton();
    AddressLineEdit* addr_bar=new AddressLineEdit();
    SearchLineEdit* search_bar=new SearchLineEdit();
    WebView* view=new WebView();
    void createControls();
    QWidget* returnTab();
    TabWindow* returnThis();
    void setWebView(WebView*);
};



#endif // TABWINDOW_H
