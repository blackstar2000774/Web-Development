import React from 'react';

function TodoItem({ todo, toggleComplete, removeTodo }) {
  return (
    <li style={{ textDecoration: todo.isCompleted ? 'line-through' : 'none' }}>
      <span onClick={() => toggleComplete(todo.id)}>{todo.text}</span>
      <button onClick={() => removeTodo(todo.id)}>Delete</button>
    </li>
  );
}

export default TodoItem;