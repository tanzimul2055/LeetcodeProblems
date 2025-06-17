class Solution {
public:
    string intToRoman(int num) {
        string s;
        
        int a = num / 1000; num -= a * 1000;
        for (int i = 0; i < a; i++) s += "M";

        int b = num / 900; num -= b * 900;
        for (int i = 0; i < b; i++) s += "CM";

        int c = num / 500; num -= c * 500;
        for (int i = 0; i < c; i++) s += "D";

        int d = num / 400; num -= d * 400;
        for (int i = 0; i < d; i++) s += "CD";

        int e = num / 100; num -= e * 100;
        for (int i = 0; i < e; i++) s += "C";

        int f = num / 90; num -= f * 90;
        for (int i = 0; i < f; i++) s += "XC";

        int g = num / 50; num -= g * 50;
        for (int i = 0; i < g; i++) s += "L";

        int h = num / 40; num -= h * 40;
        for (int i = 0; i < h; i++) s += "XL";

        int n = num / 10; num -= n * 10;
        for (int i = 0; i < n; i++) s += "X";

        int j = num / 9; num -= j * 9;
        for (int i = 0; i < j; i++) s += "IX";

        int k = num / 5; num -= k * 5;
        for (int i = 0; i < k; i++) s += "V";

        int l = num / 4; num -= l * 4;
        for (int i = 0; i < l; i++) s += "IV";

        int m = num;
        for (int i = 0; i < m; i++) s += "I";

        return s;
    }
};