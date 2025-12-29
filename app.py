from flask import Flask, render_template, request
import subprocess

app = Flask(__name__)

@app.route("/")
def home():
    return render_template("index.html")

@app.route("/run", methods=["POST"])
def run():
    src = request.form["src"]
    dest = request.form["dest"]

    result = subprocess.run(["./dijkstra", src, dest],
                             text=True, capture_output=True)

    return render_template("index.html", result=result.stdout,
                           src=src, dest=dest)

if __name__ == "__main__":
    app.run(debug=True)
