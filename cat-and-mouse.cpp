//https://www.hackerrank.com/challenges/cats-and-a-mouse/problem

string catAndMouse(int x, int y, int z) {

    int a = abs(x - z);
    int b = abs(y - z);

    if(a < b) { return "Cat A"; }
    if(b < a) { return "Cat B"; }
    if(a == b) { return "Mouse C"; }
    return 0;
}