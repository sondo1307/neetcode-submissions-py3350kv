class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int arr[5]={0};
        for (char c: text)
        {
            if(c == 'b') arr[0]++;
            if(c == 'a') arr[1]++;
            if(c == 'l') arr[2]++;
            if(c == 'o') arr[3]++;
            if(c == 'n') arr[4]++;
        }

        arr[2] /=2;
        arr[3] /=2;
        int mi = arr[0];
        for(int i : arr)
        {
            mi = min(mi, i);
        }

        return mi;
    }
};