class Solution {
public:
    string reverseWords(string s) {
        unsigned start{0};
        unsigned stop{0};
        unsigned length{static_cast<unsigned>(s.length())};
        string reversed{""};

        while(start<length and stop<length){
            while(start<length and s[start]==' ') start++;
            stop = start+1;
            while(stop<length and s[stop]!=' ') stop++;
            if(reversed.length()==0) reversed = s.substr(start, stop-start);
            else if(s.substr(start, stop-start).length() != 0)
                reversed = s.substr(start, stop-start)+ " " + reversed;
            start = stop+1;
        }

        return reversed;
    }
};