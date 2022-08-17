class SubrectangleQueries {
private:
    vector<vector<int>> rectangle;
public:
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        this->rectangle = rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int new_value) {
        for(int row=row1; row<=row2; row++){
            for(int col=col1; col<=col2; col++)
                this->rectangle[row][col] = new_value;
        }
    }
    
    int getValue(int row, int col) {
        return this->rectangle[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */