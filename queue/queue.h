
#ifndef QUEUE_H
#define QUEUE_H
const int QUESIZE = 11;

template <class I>
class queue
{
  public:
    queue();
    bool enqueue(I item);
    bool dequeue(I& item);

  private:
    bool isFull() const;
    bool isEmpty() const;

    int rear;
    int front;
    I que[QUESIZE];
};

template <clas I>
queue::queue()
{
  rear = 0;
  front = 0;
}

bool queue::enqueue(I item)
{
  bool success = false;
  if(!isFull())
  {
    que[rear] = item;
    rear = (rear + 1) % QUESIZE;
    success = true;
  }
  return success;
}
bool queue::dequeue(I& item)
{
  bool succes = false;
  if(!isEmpty())
  {
    item = que[front];
    front = (front + 1) % QUESIZE;
    success = true;
  }
  return success;
}
bool queue::isFull()
{
  return(rear == ((front + QUESIZE - 1) % QUESIZE));
}
bool queue::isEmpty()
{
  return (rear == front);
}
