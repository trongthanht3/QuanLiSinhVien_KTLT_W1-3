//
// Created by Thanh on 4/4/2020.
//

#ifndef QUANLISINHVIEN_INDANHSACH_H
#define QUANLISINHVIEN_INDANHSACH_H

#include "SinhVien.h"
#include <string>
#include <vector>

class InDanhSach {
    private:
        vector<SinhVien> DanhSach;
        string titleM2 = " _____________________________________________________________________________\n"
                     "|            |                  |                        |              |          |\n"
                     "|   Ma Lop   |   Ma sinh vien   |       Ho va ten        |   Ngay sinh  |   DTBTL  |\n"
                     "| ___________|__________________|________________________|______________|__________|",
            midLineM2 = "|            |                  |                        |              |          |",
            endLineM2 = "|____________|__________________|________________________|______________|__________|";
    vector<string> printM2 = {"Quay lai.", "\n", titleM2};
    public:
        static int n;
        InDanhSach();
        void importData();
        void printData();
        string centerString(string s, int space);
        string centerStringint(int input, int space);
        string centerStringfloat(float input, int space);
        void printListStudent();

};



void pressEnterInM2(int index);


//void pressEnterInM2(int index) {
//    switch (index) {
//        case FIRST:
//            printM2 = {" Quay lại màn hình menu chính", "\n", titleM2};
//            init(PRINT_LIST_STUDENT);
//            break;
//        default:
//            printM2 = {" Quay lại màn hình menu chính", "\n", titleM2};
//            printListStudent(index, getStudentsFromFile());
//            break;
//    }
//}

#endif //QUANLISINHVIEN_INDANHSACH_H
