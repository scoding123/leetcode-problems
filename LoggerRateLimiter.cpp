class Logger {
public:
    /** Initialize your data structure here. */
    unordered_map<string,int> countTable;
    Logger() {
        
    }
    
    /** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */
    bool shouldPrintMessage(int timestamp, string message) {
       
        if(countTable.count(message)==0){
            countTable[message]= timestamp;
            return true;
        }
        if(timestamp - countTable[message]>=10){
            countTable[message]= timestamp;
              return true;
        }
        else{
        
        
            return false;
        }
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger obj = new Logger();
 * bool param_1 = obj.shouldPrintMessage(timestamp,message);
 */
