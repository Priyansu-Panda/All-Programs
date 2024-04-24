// const dice = document.querySelectorAll('.dice');
// const result = document.getElementById('result');
// const rollButton = document.getElementById('roll');

// rollButton.addEventListener('click', rollDice);

// function rollDice() {
//   let diceValues = [];
//   for (let i = 0; i < dice.length; i++) {
//     let randomNumber = Math.floor(Math.random() * 6) + 1;
//     diceValues.push(randomNumber);
//     dice[i].style.top = `${-50 + randomNumber * 10}px`;
//   }

//   let sum = diceValues.reduce((a, b) => a + b, 0);
//   result.textContent = `You rolled: ${diceValues.join(', ')} Total: ${sum}`;
// }

const board = document.getElementById('board');
const squares = Array.from(Array(8), () => Array(8).fill(null));
const pieces = [
  ['rook', 'knight', 'bishop', 'queen', 'king', 'bishop', 'knight', 'rook'],
  ['pawn', 'pawn', 'pawn', 'pawn', 'pawn', 'pawn', 'pawn', 'pawn'],
  [null, null, null, null, null, null, null, null],
  [null, null, null, null, null, null, null, null],
  [null, null, null, null, null, null, null, null],
  [null, null, null, null, null, null, null, null],
  [null, null, null, null, null, null, null, null],
  ['pawn', 'pawn', 'pawn', 'pawn', 'pawn', 'pawn', 'pawn', 'pawn'],
  ['rook', 'knight', 'bishop', 'queen', 'king', 'bishop', 'knight', 'rook'],
];

function createBoard() {
  for (let i = 0; i < 8; i++) {
    for (let j = 0; j < 8; j++) {
      const square = document.createElement('div');
      square.classList.add('square');

      if ((i + j) % 2 === 0) {
        square.style.backgroundColor = '#ccc';
      }

      const piece = pieces[i][j];
      if (piece) {
        const pieceElement = document.createElement('div');
        pieceElement.classList.add('piece');
        pieceElement.dataset.piece = piece;
        square.appendChild(pieceElement);
      }

      board.appendChild(square);
    }
  }
}

createBoard();