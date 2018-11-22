class MovingAverage {
public:
    /** Initialize your data structure here. */
    queue<int> qnum;
    double sum =0.0f;
    int windowsize=0;
    MovingAverage(int size) {
      
        windowsize =size;
        
    }
    
    double next(int val) {
       
        if(qnum.size()<windowsize){
             qnum.push(val);
             sum+=val;
         
           
            return sum/qnum.size();
        }
        else{
            sum = sum - qnum.front();
            qnum.pop();
            qnum.push(val);
            sum +=val;
             
            return sum/windowsize;
        }
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param_1 = obj.next(val);
 */
