from flask import Flask

app = Flask(__name__)

@app.route('/home')

def home():
    return 'Home page'

@app.route('/')

def index():
    return 'Index page !'

if __name__ == '__main__':
    app.run(debug = True)