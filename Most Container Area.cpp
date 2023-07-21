
//  2pointer method
int maxArea(vector<int>& height) {
    int n=height.size();
    int area=0;
    int left=0;
    int right=n-1;

    while(left<right){
        int new_area=(min(height[right],height[left])*(right-left));
        if(area<new_area){
            area=new_area;

        }
        if(height[right]<height[left]){
            right--;
        }
        else{
            left++;
        }
    }
    return area;
}