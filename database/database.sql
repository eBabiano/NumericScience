CREATE TABLE NumericScience (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    contenido JSON NOT NULL
);

INSERT INTO NumericScience (contenido) VALUES ('{"nombre": "Archivo", "tipo": "json", "tamaño": "15KB"}');