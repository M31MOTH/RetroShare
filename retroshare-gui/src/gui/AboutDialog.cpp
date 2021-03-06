/****************************************************************
 * This file is distributed under the following license:
 *
 * Copyright (c) 2009, RetroShare Team
 * Copyright (C) 2008 Unipro, Russia (http://ugene.unipro.ru)
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, 
 *  Boston, MA  02110-1301, USA.
 ****************************************************************/

#include "AboutDialog.h"

AboutDialog::AboutDialog(QWidget* parent)
	: QDialog(parent,Qt::WindowSystemMenuHint | Qt::WindowTitleHint | Qt::WindowCloseButtonHint)
{
#ifdef Q_OS_WIN
    setWindowFlags(windowFlags() | Qt::MSWindowsFixedSizeDialogHint);
#endif

    setupUi(this) ;

    QObject::connect(widget->close_button,SIGNAL(clicked()),this,SLOT(close()));
}


