class Solution {
public:
    int compress(vector<char>& chars) {
        string temp = "";
        int count = 1 ;
        for(int i = 0 ; i <chars.size(); i++){
        if(i + 1 < chars.size() && chars[i] == chars[i + 1]){
        count++;
        } else {
        temp.push_back(chars[i]);
        if(count > 1){
            temp += to_string(count);
        }
        count = 1;
    }
}
        chars.clear();
        for(int i = 0 ; i<temp.size(); i++){
            chars.push_back(temp[i]);
        }
        return chars.size();
    }
};