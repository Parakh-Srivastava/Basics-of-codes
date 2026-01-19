const list = ["Paris", "Uganda", "New Zealand", "Denmark", "Australia"];

export default function MapUse() {
  return (
    <div class="container text-center">
      <div class="row">
        {list.map((letter) => (
          <div class="col" key={letter}>
            {letter}
          </div>
        ))}
      </div>
    </div>
  );
}
