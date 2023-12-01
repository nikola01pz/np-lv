
#include "CircularBuffer.h"

void Init(buffer_struct* buf)
{
	buf->rear = buf->front = buf->&buffer[0]; 
}

int isEmpty(buffer_struct* buf)
{
	if (buf->front == buf->rear) return 1;
	return 0; 
}

int isFull(buffer_struct* buf)
{
	if (buf->front == (buf->rear+1)) return 1;
	if ((buf->rear == &(buf->buffer[BUFFER_SIZE-1])) && (buf->front == &(buf->buffer[0]))) return 1;
	return 0; 
}

int put(buffer_struct* buf, buffer_type x)
{
	if (isFull(buf)) return 0;
	*(buf->rear) = x;
	buf->rear++;
	if (buf->rear == &(buf->buffer[BUFFER_SIZE])) buf->rear = &(buf->buffer[0]);
	return 1;
}

buffer_type get(buffer_struct* buf)
{
	if (isEmpty(buf)) return BUFFER_GET_ERROR;
	buffer_type x;
	x = *(buf->front);
	buf->front++;
	if (buf->front == &(buf->buffer[BUFFER_SIZE])) buf->front = &(buf->buffer[0]);
	return x;
}

void empty(buffer_struct* buf)
{
	(buf->front) = (buf->rear) = &(buf->buffer[0]);
}

void dump(buffer_struct* buf)
{
	if (isEmpty(buf)) return;
	buffer_type* current;
	current = (buf->front);
	do
	{
		printf ("element: %d\n",*current);
		current++;
		if (current == &(buf->buffer[BUFFER_SIZE])) current = &(buf->buffer[0]);
	}
	while (!(current == (buf->rear)));
}



