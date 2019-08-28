// https://www.hackerrank.com/challenges/time-conversion/problem

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    int hour = stoi(s);

    char output[9];

    for (int i = 0; i < 8; i++) { 
        output[i] = s[i]; 
    }
    output[8] = '\0';

    stringstream out;

    if(hour < 12 && s[8] == 'A')
    {
        out << setfill('0') << std::setw(2) << hour;
    }
    if(hour < 12 && s[8] == 'P')
    {
        out << setfill('0') << std::setw(2) << hour+12;
    }
    if(hour == 12 && s[8] == 'A')
    {
        out << setfill('0') << std::setw(2) << 0;
    }
    if(hour == 12 && s[8] == 'P')
    {
        out << setfill('0') << std::setw(2) << hour;
    }

    string hourString = out.str();
    output[0] = hourString[0];
    output[1] = hourString[1];

    return string(output);
}