class MedianFinder {
public:
priority_queue<int>maxHeap;
priority_queue<int,vector<int>,greater<int>>minHeap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxHeap.empty()||num<=maxHeap.top())
        {
            maxHeap.push(num);
        }
        else
        {
            minHeap.push(num);
        }
        //balance the heap
        if(maxHeap.size()>minHeap.size()+1)
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        else if(minHeap.size()>maxHeap.size()+1)
        {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
        
    }
    
    double findMedian() {
        //if both heaps have same size
        if(maxHeap.size()==minHeap.size())
        {
            return(maxHeap.top()+minHeap.top())/2.0;
        }
        // if maxHeap has more elements->left m jada elements hai
        else if(maxHeap.size()>minHeap.size())
        {
            return maxHeap.top();

        }
        // if minheap has more elements
        return minHeap.top();
        
    }
};
