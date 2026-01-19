import { useState } from "react";

export default function UseStatelearn() {
  const [isLoading, setIsLoading] = useState(false);
  return (
    <div className="container text-center">
      <button
        type="button"
        className="btn btn-danger col-3 my-5"
        onClick={() => setIsLoading(true)}
      >
        {isLoading ? "clicked" : "click me"}
      </button>
    </div>
  );
}
