#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "ป้อนสายอักขระ: ";
    getline(cin, str);

    bool isAllCapital = true;
    bool isAllSmall = true;

    // ตรวจสอบสายอักขระ
    for (char ch : str) {
        if (islower(ch)) {
            isAllCapital = false;
        } else if (isupper(ch)) {
            isAllSmall = false;
        }
    }

    // พิมพ์ผลลัพธ์
    if (isAllCapital) {
        cout << "All Capital Letter" << endl;
    } else if (isAllSmall) {
        cout << "All Small Letter" << endl;
    } else {
        cout << "Mix" << endl;
    }

    return 0;
}

/*
-- Psudo Code --
สร้างตัวแปร str สำหรับเก็บสายอักขระที่ผู้ใช้ป้อนเข้ามา

แสดงข้อความ "ป้อนสายอักขระ: "
รับค่าสายอักขระและเก็บในตัวแปร str

สร้างตัวแปร isAllCapital และ isAllSmall และกำหนดค่าเริ่มต้นให้เป็นจริง (true)

วนลูปตามแต่ละตัวอักษร ch ใน str ทำ
    ถ้าตัวอักษร ch เป็นตัวพิมพ์เล็ก ทำ
        เปลี่ยนค่าของตัวแปร isAllCapital เป็นเท็จ (false)
    ถ้าตัวอักษร ch เป็นตัวพิมพ์ใหญ่ ทำ
        เปลี่ยนค่าของตัวแปร isAllSmall เป็นเท็จ (false)
    สิ้นสุดการตรวจสอบ

ถ้า isAllCapital เป็นจริง ทำ
    พิมพ์ "All Capital Letter"
อย่างไม่ต้องมีเครื่องหมาย
ถ้า isAllSmall เป็นจริง ทำ
    พิมพ์ "All Small Letter"
อย่างไม่ต้องมีเครื่องหมาย
ถ้าทั้ง isAllCapital และ isAllSmall เป็นเท็จ ทำ
    พิมพ์ "Mix"
อย่างไม่ต้องมีเครื่องหมาย

*/