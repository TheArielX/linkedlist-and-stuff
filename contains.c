//en el header//
bool contains(Lista l, int value;)
//

bool contains(Lista l, int value)
{
  Node* tNode = l.head;
  bool isFound = false;
  
  if(!isEmpty(l))
  {
    tNode = l.head->first;
    
    while(tNode->next != NULL)
    {
      tNode = tNode->next;
      isFound = tNode->dato == value;
      
        if(isFound)
          break;
    }
  }
 
 retunr isFound;
 
}
