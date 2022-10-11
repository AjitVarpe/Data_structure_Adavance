class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_word = -1;
        for(int i=0;i<sentences.size();i++){
            int word_count =1;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j] ==' '){
                    word_count++;
                }
            }
            max_word = max(max_word,word_count);
        }
        return max_word;
    }
};