/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Info
{
public:
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QDialog *Info)
    {
        if (Info->objectName().isEmpty())
            Info->setObjectName(QString::fromUtf8("Info"));
        Info->resize(520, 550);
        Info->setStyleSheet(QString::fromUtf8("background : rgb(197, 255, 187)"));
        textEdit = new QTextEdit(Info);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 50, 501, 491));
        textEdit->setStyleSheet(QString::fromUtf8("background : rgb(255, 255, 255);\n"
"color : rgb(0, 0, 0)"));
        label = new QLabel(Info);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 321, 31));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color :rgb(0, 0, 0)"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Info);

        QMetaObject::connectSlotsByName(Info);
    } // setupUi

    void retranslateUi(QDialog *Info)
    {
        Info->setWindowTitle(QCoreApplication::translate("Info", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Info", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Fill table</span> - \321\204\321\203\320\275\320\272\321\206\321\226\321\217 \320\264\320\273\321\217 \320\267\320\260\320\277\320\276\320\262\320\275\320\265\320\275\320\275\321\217 \321\202\320\260\320\261\320\273\320\270\321\206\321\226 \320\267 \321\204\320\260\320\271\320\273\321\203</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; marg"
                        "in-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Add new day</span> - \321\204\321\203\320\275\320\272\321\206\321\226\321\217 \320\264\320\273\321\217 \320\264\320\276\320\264\320\260\320\262\320\260\320\275\320\275\321\217 \320\275\320\276\320\262\320\276\320\263\320\276 \320\264\320\275\321\217 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\216</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Clear table</span> - \321\204\321\203\320\275\320\272\321\206\321\226\321\217 \320\277\320\276\320\262\320\275\320\276\320\263\320\276 \320\276\321\207\320\270\321\211\320\265\320\275\320\275\321\217 \321\202\320\260\320\261\320\273\320\270\321\206\321\226</p>\n"
"<p style=\"-qt-paragraph-type:emp"
                        "ty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Save</span> - \321\204\321\203\320\275\320\272\321\206\321\226\321\217 \320\264\320\273\321\217 \320\267\320\261\320\265\321\200\320\265\320\266\320\265\320\275\320\275\321\217 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\227 \320\267 \321\202\320\260\320\261\320\273\320\270\321\206\321\226 \321\203 \321\204\320\260\320\271\320\273</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Weather forecast</span> - \321\204\321\203\320\275\320"
                        "\272\321\206\321\226\321\217 \320\264\320\273\321\217 \320\277\321\200\320\276\320\263\320\275\320\276\320\267\321\203\320\262\320\260\320\275\320\275\321\217 \320\277\320\276\320\263\320\276\320\264\320\270 \320\275\320\260 30 \320\264\320\275\321\226\320\262 \320\262\320\277\320\265\321\200\320\265\320\264</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Diagram</span> - \321\204\321\203\320\275\320\272\321\206\321\226\321\217 \320\264\320\273\321\217 \320\277\320\276\320\261\321\203\320\264\320\276\320\262\320\270 \320\263\321\200\320\260\321\204\321\226\320\272\321\203 \321\202\320\270\321\201\320\272\321\203, \320\262\320\276\320\273\320\276\320\263\320\276\321\201\321\202\321\226, \321\202\320\265\320\274\320\277\320\265\321\200\320\260"
                        "\321\202\321\203\321\200\320\270</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Average humidity</span> - \321\204\321\203\320\275\320\272\321\206\321\226\321\217 \320\264\320\273\321\217 \320\262\320\270\320\267\320\275\320\260\321\207\320\265\320\275\320\275\321\217 \320\262\320\276\320\273\320\276\320\263\320\276\321\201\321\202\321\226 \320\267\320\260 \320\276\321\201\321\202\320\260\320\275\320\275\321\226 30 \320\264\320\275\321\226\320\262</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
                        "style=\" font-weight:600;\">Max temperature</span> - \321\204\321\203\320\275\320\272\321\206\321\226\321\217 \320\264\320\273\321\217 \320\262\320\270\320\267\320\275\320\260\321\207\320\265\320\275\320\275\321\217 \320\264\320\275\321\226\320\262 , \320\262 \321\217\320\272\320\270\321\205 \320\267\320\260\321\204\321\226\320\272\321\201\320\276\320\262\320\260\320\275\320\260 \320\275\320\260\320\271\320\261\321\226\320\273\321\214\321\210\320\260 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Min pressure</span> - \321\204\321\203\320\275\320\272\321\206\321\226\321\217 \320\264\320\273\321\217 \320\262\320\270\320\267\320\275\320\260\321\207\320\265"
                        "\320\275\320\275\321\217 \320\264\320\275\321\226\320\262 , \320\262 \321\217\320\272\320\270\321\205  \320\267\320\260\321\204\321\226\320\272\321\201\320\276\320\262\320\260\320\275\320\270\320\271 \320\275\320\260\320\271\320\274\320\265\320\275\321\210\320\270\320\271 \321\202\320\270\321\201\320\272</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Wind no changes</span> - \321\204\321\203\320\275\320\272\321\206\321\226\321\217 \320\264\320\273\321\217 \320\262\320\270\320\267\320\275\320\260\321\207\320\265\320\275\320\275\321\217 \320\277\320\265\321\200\321\226\320\276\320\264\321\226\320\262 ,  \320\272\320\276\320\273\320\270 \320\275\320\260\320\277\321\200\321\217\320\274 \320\262\321\226\321\202\321\200\321\203 \320\275\320\265"
                        " \320\267\320\274\321\226\320\275\321\216\320\262\320\260\320\262\321\201\321\217</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Period of change</span> - \321\204\321\203\320\275\320\272\321\206\321\226\321\217 \320\264\320\273\321\217 \320\262\320\270\320\267\320\275\320\260\321\207\320\265\320\275\320\275\321\217 \320\277\320\265\321\200\321\226\320\276\320\264\321\226\320\262 ,  \320\272\320\276\320\273\320\270 \320\267\320\274\321\226\320\275\320\260 \321\202\320\270\321\201\320\272\321\203 \321\202\320\260 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\270 \320\275\320\265 \320\277\320\265\321\200\320\265\320\262\320\265\321\211\321\203\320\262\320\260\320\273\320\270 1.43% \321\202\320\260 5.67"
                        "3%</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Temperature by period</span> - \321\204\321\203\320\275\320\272\321\206\321\226\321\217 \320\264\320\273\321\217 \320\262\320\270\320\267\320\275\320\260\321\207\320\265\320\275\320\275\321\217 \321\201\320\265\321\200\320\265\320\264\320\275\321\214\320\276\321\227 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\270 \321\202\320\260 \320\264\320\275\321\226\320\262 \320\267 \320\275\320\260\320\271\320\262\320\270\321\211\320\276\321\216 \320\262\320\276\320\273\320\276\320\263\321\226\321\201\321\202\321\216 \320\267\320\260 \320\267\320\260\320\264\320\260\320\275\320\270\320\274 \320\277\320\265\321\200\320\265\321\226\320\276\320\264\320\276\320\274"
                        "</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Info", "Information about functions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Info: public Ui_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
