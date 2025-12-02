from flask import Flask, request, render_template,url_for

app = Flask(__name__)

town_register = {
    ("Alice",   12): "Maple Street",
    ("Bob",     34): "Oak Avenue",
    ("Carlos",   5): "Pine Road",
    ("Diana",   99): "Elm Boulevard",
}

@app.route("/", methods=["GET", "POST"])
def index():
    css_ = url_for('static',filename = 'style.css')
    result = None
    if request.method == "POST":
        name = request.form.get("name", "").strip().title()
        try:
            house_number = int(request.form.get("house_number"))
        except ValueError:
            house_number = None

        if name and house_number is not None:
            result = (name, house_number) in town_register

    return render_template("index.html", css_path = css_ ,result=result)

if __name__ == "__main__":
    app.run(debug=True)