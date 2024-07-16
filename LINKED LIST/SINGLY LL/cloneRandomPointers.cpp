// #include <bits/stdc++.h>

// Method 1

// using namespace std;
// /* Link list Node */
// struct Node
// {
//     int data;
//     Node *next;
//     Node *arb;

//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//         arb = NULL;
//     }
// };

// // } Driver Code Ends
// class Solution
// {
// private:
//     void insertAtTail(Node *&head, Node *&tail, int val)
//     {
//         Node *temp = new Node(val);
//         if (head == NULL)
//         {
//             head = temp;
//             tail = temp;
//             return;
//         }
//         else
//         {
//             tail->next = temp;
//             tail = temp;
//         }
//     }

// public:
//     Node *copyList(Node *head)
//     {
//         Node *cloneHead = NULL;
//         Node *cloneTail = NULL;
//         Node *temp = head;
//         while (temp != NULL)
//         {
//             insertAtTail(cloneHead, cloneTail, temp->data);
//             temp = temp->next;
//         }
//         unordered_map<Node *, Node *> oldToNewNode;
//         Node *originalNode = head;
//         Node *cloneNode = cloneHead;
//         while (originalNode != NULL)
//         {
//             oldToNewNode[originalNode] = cloneNode;
//             originalNode = originalNode->next;
//             cloneNode = cloneNode->next;
//         }
//         originalNode = head;
//         cloneNode = cloneHead;
//         while (originalNode != NULL)
//         {
//             cloneNode->arb = oldToNewNode[originalNode->arb];
//             originalNode = originalNode->next;
//             cloneNode = cloneNode->next;
//         }
//         return cloneHead;
//     }
// };

// Method 2

using namespace std;
/* Link list Node */
struct Node
{
    int data;
    Node *next;
    Node *arb;

    Node(int x)
    {
        data = x;
        next = NULL;
        arb = NULL;
    }
};

class Solution
{
private:
    void insertAtTail(Node *&cloneHead, Node *&cloneTail, int val)
    {
        Node *temp = new Node(val);
        if (cloneHead == NULL)
        {
            cloneHead = temp;
            cloneTail = temp;
        }
        else
        {
            cloneTail->next = temp;
            cloneTail = temp;
        }
    }

public:
    Node *copyList(Node *head)
    {
        Node *cloneHead = NULL;
        Node *cloneTail = NULL;
        Node *temp = head;
        while (temp != NULL)
        {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        Node *originalNode = head;
        Node *cloneNode = cloneHead;
        while (originalNode != NULL && cloneNode != NULL)
        {
            Node *next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;

            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }

        temp = head;
        while (temp != NULL)
        {
            if (temp->next != NULL)
            {
                temp->next->arb = temp->arb ? temp->arb->next : temp->arb;
                // if(temp->arb!=NULL){
                //     temp->next->arb = temp->arb->next;
                // }
                // else{
                //     temp->next = NULL;
                // }
            }
            temp = temp->next->next;
        }

        originalNode = head;
        cloneNode = cloneHead;
        while (originalNode != NULL && cloneNode != NULL)
        {
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;

            if (originalNode != NULL)
            {
                cloneNode->next = originalNode->next;
            }
            cloneNode = cloneNode->next;
        }
        return cloneHead;
    }
};