/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *button;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *result;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *restart;
    QPushButton *no_restart;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(725, 713);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        Dialog->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resurces/naval.png"), QSize(), QIcon::Selected, QIcon::On);
        Dialog->setWindowIcon(icon);
        Dialog->setWindowOpacity(1.000000000000000);
        Dialog->setStyleSheet(QString::fromUtf8(""));
        Dialog->setInputMethodHints(Qt::ImhNone);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 40, 466, 470));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        button = new QPushButton(layoutWidget);
        button->setObjectName(QString::fromUtf8("button"));
        sizePolicy.setHeightForWidth(button->sizePolicy().hasHeightForWidth());
        button->setSizePolicy(sizePolicy);
        button->setMinimumSize(QSize(150, 150));
        button->setMaximumSize(QSize(150, 150));
        button->setStyleSheet(QString::fromUtf8(""));
        button->setIconSize(QSize(120, 120));

        horizontalLayout->addWidget(button);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(150, 150));
        pushButton_8->setMaximumSize(QSize(150, 150));
        pushButton_8->setStyleSheet(QString::fromUtf8(""));
        pushButton_8->setIconSize(QSize(120, 120));

        horizontalLayout->addWidget(pushButton_8);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(150, 150));
        pushButton_6->setMaximumSize(QSize(150, 150));
        pushButton_6->setStyleSheet(QString::fromUtf8(""));
        pushButton_6->setIconSize(QSize(120, 120));

        horizontalLayout->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(150, 150));
        pushButton_5->setMaximumSize(QSize(150, 150));
        pushButton_5->setStyleSheet(QString::fromUtf8(""));
        pushButton_5->setIconSize(QSize(120, 120));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(150, 150));
        pushButton_9->setMaximumSize(QSize(150, 150));
        pushButton_9->setStyleSheet(QString::fromUtf8(""));
        pushButton_9->setIconSize(QSize(120, 120));

        horizontalLayout_2->addWidget(pushButton_9);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(150, 150));
        pushButton_7->setMaximumSize(QSize(150, 150));
        pushButton_7->setStyleSheet(QString::fromUtf8(""));
        pushButton_7->setIconSize(QSize(120, 120));

        horizontalLayout_2->addWidget(pushButton_7);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(150, 150));
        pushButton_2->setMaximumSize(QSize(150, 150));
        pushButton_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_2->setIconSize(QSize(120, 120));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(150, 150));
        pushButton_3->setMaximumSize(QSize(150, 150));
        pushButton_3->setStyleSheet(QString::fromUtf8(""));
        pushButton_3->setIconSize(QSize(120, 120));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(150, 150));
        pushButton_4->setMaximumSize(QSize(150, 150));
        pushButton_4->setStyleSheet(QString::fromUtf8(""));
        pushButton_4->setIconSize(QSize(120, 120));

        horizontalLayout_3->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_3);

        result = new QWidget(Dialog);
        result->setObjectName(QString::fromUtf8("result"));
        result->setEnabled(true);
        result->setGeometry(QRect(210, 550, 0, 0));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy1);
        result->setInputMethodHints(Qt::ImhNone);
        layoutWidget1 = new QWidget(result);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(9, 0, 223, 58));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setToolTipDuration(-1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setMidLineWidth(0);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        restart = new QPushButton(layoutWidget1);
        restart->setObjectName(QString::fromUtf8("restart"));
        restart->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(restart->sizePolicy().hasHeightForWidth());
        restart->setSizePolicy(sizePolicy3);
        restart->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(restart);

        no_restart = new QPushButton(layoutWidget1);
        no_restart->setObjectName(QString::fromUtf8("no_restart"));
        no_restart->setEnabled(false);
        sizePolicy3.setHeightForWidth(no_restart->sizePolicy().hasHeightForWidth());
        no_restart->setSizePolicy(sizePolicy3);
        no_restart->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(no_restart);


        verticalLayout_3->addLayout(horizontalLayout_4);

        layoutWidget2 = new QWidget(Dialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\320\237\321\203\321\202\320\270\320\275\320\272\320\270-\320\235\320\260\320\262\320\260\320\273\321\214\320\275\320\270\320\272\320\270", nullptr));
        button->setText(QString());
        pushButton_8->setText(QString());
        pushButton_6->setText(QString());
        pushButton_5->setText(QString());
        pushButton_9->setText(QString());
        pushButton_7->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QString());
        restart->setText(QCoreApplication::translate("Dialog", "\320\237\320\265\321\200\320\265\320\270\320\263\321\200\320\260\321\202\321\214!", nullptr));
        no_restart->setText(QCoreApplication::translate("Dialog", "\320\257 \321\201\321\202\320\260\321\200 \320\264\320\273\321\217 \321\215\321\202\320\276\320\263\320\276 \320\264\320\265\321\200\321\214\320\274\320\260!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
