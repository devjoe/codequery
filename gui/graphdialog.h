
/*
 * CodeQuery
 * Copyright (C) 2013-2016 ruben2020 https://github.com/ruben2020/
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#ifndef GRAPHDIALOG_H_CQ
#define GRAPHDIALOG_H_CQ

#ifdef USE_QT5
#include <QtWidgets>
#else
#include <QtGui>
#endif


 namespace Ui {
     class DialogGraph;
 }

class cqDialogGraph : public QDialog
{
  Q_OBJECT

public:
Ui::DialogGraph *dialog_ui;
cqDialogGraph(QWidget *parent);
virtual ~cqDialogGraph();
void setupGraphFromXML(QStringList& grpxml, QStringList& grpdot, QString& desc);
void scaleImage(double factor);
void adjustScrollBar(QScrollBar *scrollBar, double factor);

public slots:
void zoomout();
void zoomin();
void savetoimagefile();
void savetodotfile();
void numberOfLevelsChanged(int num);

private:
double m_scaleFactor;
QImage m_img;
QString m_dot;
QStringList m_grpxml;
QStringList m_grpdot;

};


#endif //GRAPHDIALOG_H_CQ


