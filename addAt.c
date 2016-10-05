void addAt (Lista &l, int value, int position)
{
    Node* tempNode1 = NULL;
    Node* tempNode2 = NULL;
    Node* newNode = createNode(value);
    int longitud = getLength(l);
    
    tempNode1 = l.head;
    tempNode2 = tempNode1->next;
    
    for(int i = 0; i < position; i++)
    {
      tempNode1= tempNode1->next;
      
    }
