CREATE TABLE IF NOT EXISTS categories (
    id              INTEGER PRIMARY KEY AUTOINCREMENT,
    name            TEXT UNIQUE
);
  
CREATE TABLE IF NOT EXISTS subcategories (
    id              INTEGER PRIMARY KEY AUTOINCREMENT,
    id_category     INTEGER,
    name            TEXT,
    UNIQUE ( id_category, name ),
    FOREIGN KEY ( id_category ) REFERENCES categories ( id )
);

CREATE TABLE IF NOT EXISTS accounts (
    id              INTEGER PRIMARY KEY AUTOINCREMENT,
    nr              TEXT UNIQUE,
    name            TEXT UNIQUE,
    initial_value   NUMBER
);
